class Solution {
public:
    vector<int> solver(TreeNode* root, int distance,int & count){
        
        if(root==nullptr) return {};

        if(root->left==nullptr && root->right==nullptr)
        {
            return {1};
        }

        auto ld=solver(root->left,distance,count);
         auto rd=solver(root->right,distance,count);

         for(auto elem : ld)
         {
            for(auto elet: rd)
            {
                if(elem+elet<=distance) count++;
            }
         }

         vector<int>returner;

         for(auto l:ld){

        //now transfer left value to the parent with +1;

                if(l+1<distance) returner.push_back(l+1);
         }

      
        for(auto r:rd){

        //now transfer right value to the parent with +1;

                        
                if(r+1<distance) returner.push_back(r+1);
         }   
            
            return returner; 

//action of returner
//if the initial value was {1} for left and {1} for right get to the parent with {2} and {2} respectively.
    }

    int countPairs(TreeNode* root, int distance) {

        int count=0;

        solver(root,distance,count);

        return count;
        
    }
};