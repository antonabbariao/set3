#include <iostream>
#include <vector>
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int val) : val(val), next(nullptr) {}
};

/*
    - 1 -> 2 -> 3 -> nullptr
    - 3 -> 2 -> 1 -> nullptr
*/

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        LitNode *current = head;
        ListNosde *previous = nullptr;
        
        // loop invariant - 
        while (current != nullptr){
            // curr = 1, next -> 2, prev = nullptr
            ListNode *next = current -> next; // 2
            current -> next = previous; // 1 -> nullptr
            previous = current; // previous = 1
            current = next; // curr = 2
        }

        return previous;
    }

    void iterate(ListNode *head){
        ListNode *current = head;

        while (current != nullptr){
            std::cout << current->val << std::endl;

            ListNode *next = current->next;
            current = next;


        }
    }

    int sum_of_list(ListNode *head){
        ListNode *current = head;
        int result = 0;

        while (current != nullptr){
            result += current->val;
            current = current->next;
        }

        return result;
    }

    int product_of_list(ListNode *head){
        ListNode *current = head;
        int result = 1;

        while(current != nullptr){
            result *= current->val;
            current = current->next;
        }
        return result;
    }


};

std::vector<int> linked_list_to_vec(ListNode *head){
    std::vector<int> result;

    ListNode *current = head;

    while (current != nullptr){
        result.push_back(current->val);
        current = current->next;
    }

    return result;
}

void printll(ListNode *head){
    // use your previous func to create a vector from the ll 
    // then print out the values from your vector 

    std::vector<int> result = linked_list_to_vec(head);

    for (int i = 0; i < result.size(); i++){
        std::cout << result[i] << " -> ";
        if (i == result.size()-1){
            std::cout << "nullptr" << std::endl;
        }
    }
}

ListNode* vec_to_linked_list(std::vector<int> nums){
    // 0 -> nullptr
    ListNode *dummy = new ListNode(0);
    
    ListNode *current = dummy;


    for (int i = 0; i < nums.size(); i++){
        current->next = new ListNode(nums[i]);
        current = current->next;
    }

    return dummy->next;
}


int main(){
/*    int n;
    std::cout << "enter dynamic:";
    std::cin >> n;
    // arrays and vectors in c++

    int *dyn_arr = new int[10];
    for (int i = 0; int < 10; i++){
        dyn_arr[i] = i * i;
    }

    for (int i = 0; i < 10; i++){
        std::cout << dyn_arr[i] << std::endl;
    }

    // arraylist -> vector

    std::vector<int> nums(10, 0);

    for (int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << std::endl;
    }

*/    //  nums.push_back(10); // adds ten in the back


    std::vector<int> nums = {1, 2, 3};
    ListNode *head = vec_to_linked_list(nums);
    printll(head);

    Solution solution;
    printll(solution.reverseList(head));

    return 0;
}