class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(auto i:students)
        {
            q.push(i);
        }
        int i=0;
        int size=students.size();
        while(true)
        {
            if(!q.empty() and sandwiches[i]==q.front())
            {
                i++;
                q.pop();
            }
            else
            {
                int j=0;
                int k=q.size();
                while(!q.empty() and q.front()!=sandwiches[i] and j!=k)
                {
                    int a=q.front();
                    q.pop();
                    q.push(a);
                    j++;
                }
                if(j==k)
                {
                    break;
                }
            }
            if(q.empty())
            {
                return 0;
            }
        }
        return size-i;
    }
};