class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q; stack<int> st;
        for(auto it: students) q.push(it);
        // cout<<q.size();
        reverse(sandwiches.begin(), sandwiches.end());
        for(auto it: sandwiches) st.push(it);
        int count = 0;
        while(!q.empty() and !st.empty()){
            // cout<<q.front()<<"front"<<endl;
            if(q.front()==st.top()){
                // cout<<q.front()<<" ";
                count = 0;
                q.pop();
                st.pop();
            }else{

                // cout<<q.front()<<" ";
                int n = q.front();
                q.pop();
                q.push(n);
                count++;
                if (count == q.size())
                    break;
            }
        }
        return q.size();
    }
};