class Solution {
public:
    string reverseParentheses(string s) {
        string dummy="";
        stack<string>holder;

        for(auto elem: s)
        {
            if(elem=='(') 
            {
                holder.push(dummy);
                dummy.clear();
            }
            else if(elem==')')
            {
                reverse(dummy.begin(),dummy.end());

                if(!holder.empty())
                {
                    dummy=holder.top() + dummy;
                    holder.pop();
                }

            }
            else{
                dummy+=elem;
            }
        }

        return dummy;
        
    }
};
