/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode * ptr=head;
        vector<int> binaryStr;
        int t=0;
        while(ptr!=NULL){
            binaryStr.push_back(ptr->val);
            ptr=ptr->next;
            // cout<<binaryStr[t];
            // t++;
        }
        cout<<endl;
        int decimalValue=0;
        int len = binaryStr.size();
        int i= len-1;
        for(int x=0; x<len && i>=0; x++){
          //  cout<<decimalValue<<endl;
            decimalValue += binaryStr[x]*(pow(2,i));

            i--;
        }        
        return decimalValue;
    }

};