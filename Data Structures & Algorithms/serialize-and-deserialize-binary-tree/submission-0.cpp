/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        vector<string>res;
        dfsSE(root,res);
        return join(res,",");
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string>vals = split(data,',');
        int i =0;
        return dfsDSE(vals,i);
    }
    void dfsSE(TreeNode* node , vector<string>&res){
        if(!node){
            res.push_back("N");
            return;
        }
        res.push_back(to_string(node->val));
        dfsSE(node->left,res);
        dfsSE(node->right,res);
    }
    TreeNode*dfsDSE(vector<string>&vals, int &i){
        if(vals[i]=="N"){
            i++;
            return NULL;
        }
        TreeNode * node = new TreeNode(stoi(vals[i]));
        i++;
        node->left = dfsDSE(vals,i);
        node->right = dfsDSE(vals,i);
        return node;
    }
    vector<string> split(const string &s, char delim){
        vector<string> elem;
        stringstream ss(s);
        string item;
        while(getline(ss, item,delim)){
            elem.push_back(item);
        }
        return elem;
    }
    string join(const vector<string>&v,const string delim){
        ostringstream s;
        for(const auto &i:v){
            if(&i != &v[0])
            s<<delim;
            s<<i;
        }
        return s.str();
    }
};
