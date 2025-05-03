#include <iostream>
#include <vector>
// counts the numbers in a linked list and returns an int

struct ListNode {
    int val;
       ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};

class Solution{
    public:

    int count_nodes(ListNode* head){ // question 1
        ListNode *current = head;
        
        if (current == nullptr){
            return 0;
        }
        else{

            int result = 0;
            while(current != nullptr){
                result++;
                current = current->next;
            }
            return result;

        }

    }

    // determine whether the length of the list is odd or even 
    // then do a for loop iterating to the designated node

    ListNode* find_middle_node(ListNode* head){
        ListNode *current = head;

        if (current == nullptr){
            return nullptr;
        }
        else{ // must use the fast and slow
            ListNode *slow = current;
            ListNode *fast = current;
            
            while (fast != nullptr && fast->next != nullptr){ // explain to kuya in paint
                slow = slow->next; // slow is the pointer you return
                fast = fast->next->next; // fast is the condition basically idk
            }

            return slow; 
        }
    }

    std::vector<int> running_sum(const std::vector<int>& nums){
                
        if (nums.size() == 0){
            return {};
        }
        else{
            std::vector<int> result; // returning vector
            int sum = 0; // the running sum
            for (int i = 0; i < nums.size(); i++){ // going through the given vector
                sum += nums[i]; // adding the current vectors iteration to the running sum
                result.push_back(sum);
            }
            return result;
        }

    }

    

};


int main() {
    // ===== Test 1: count_nodes =====
    ListNode* count_head = new ListNode(1);
    count_head->next = new ListNode(2);
    count_head->next->next = new ListNode(3);

    Solution count_solver;
    int count_result = count_solver.count_nodes(count_head);
    std::cout << "Number of nodes: " << count_result << std::endl; // Expected: 3

    ListNode* count_empty = nullptr;
    count_result = count_solver.count_nodes(count_empty);
    std::cout << "Number of nodes: " << count_result << std::endl; // Expected: 0

    // ===== Test 2: find_middle_node =====
    ListNode* mid_head = new ListNode(1);
    mid_head->next = new ListNode(2);
    mid_head->next->next = new ListNode(3);
    mid_head->next->next->next = new ListNode(4);
    mid_head->next->next->next->next = new ListNode(5);

    Solution middle_finder;
    ListNode* mid_result = middle_finder.find_middle_node(mid_head);
    std::cout << "Middle node value: " << (mid_result ? mid_result->val : -1) << std::endl; // Expected: 3

    ListNode* even_head = new ListNode(1);
    even_head->next = new ListNode(2);
    even_head->next->next = new ListNode(3);
    even_head->next->next->next = new ListNode(4);
    even_head->next->next->next->next = new ListNode(5);
    even_head->next->next->next->next->next = new ListNode(6);

    mid_result = middle_finder.find_middle_node(even_head);
    std::cout << "Middle node value: " << (mid_result ? mid_result->val : -1) << std::endl; // Expected: 4

    ListNode* mid_empty = nullptr;
    mid_result = middle_finder.find_middle_node(mid_empty);
    std::cout << "Middle node value: " << (mid_result ? mid_result->val : -1) << std::endl; // Expected: -1
    
    Solution sum_solver;

    // Test 1: Normal input
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> result1 = sum_solver.running_sum(nums1);

    std::cout << "Running sum of [1, 2, 3, 4]: ";
    for (int val : result1) {
        std::cout << val << " ";
    }
    std::cout << std::endl; // Expected: 1 3 6 10

    // Test 2: All ones
    std::vector<int> nums2 = {1, 1, 1, 1, 1};
    std::vector<int> result2 = sum_solver.running_sum(nums2);

    std::cout << "Running sum of [1, 1, 1, 1, 1]: ";
    for (int val : result2) {
        std::cout << val << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 4 5

    // Test 3: Empty vector
    std::vector<int> nums3 = {};
    std::vector<int> result3 = sum_solver.running_sum(nums3);

    std::cout << "Running sum of []: ";
    for (int val : result3) {
        std::cout << val << " ";
    }
    std::cout << std::endl; // Expected: (blank line)

    return 0;
}
