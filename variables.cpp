#include <iostream>
 
// list node (linked list)
// node w value of 1 -> 2 -> 3 -> nullptr
// Node *a = new Node(1);
// Node *b = new Node(2);
// Node *c
struct Node{
    int val;
    Node *next;

    // constructor => how you create an object from a class
    Node(int val): val(val), next(nullptr){}
};
int main(){

    // boolean
    bool is_true = true;
    bool is_true = false;

    // char - 8 bits
    char grade = 'a';

    // wide character - 16 bits

    wchar_t w_char = "insert euro"

    // unicode charater -1 16 or 32 bits
    
    char16_t uni_char = 'blah' // lowercase u
    char32_t uni_char32 = 'blah' // uppercase u

    int num = 10; // 16
    long long_num = 10000000000; // 32
    long long long_long_num = 1000000000000000000000000; // 64 bits

    // real nums
    float float_num = 1.2348957; // minimum size: 6 digit precision
    double double_num = 1.2389573298 // minimum size: 10 dig digits
    long double long_double_num = 1.1029389012 // minimum size: 10 sig figs (can contain more) up to 64 bits

    // escape sequence
    char newline = '\n';
    char horizontal_tab = '\t';
    char vertical_tab = '\v';
    char backspace = '\b';
    char double_quote = '\"';
    char single_quote = '\'';
    char backslash = '\\';
    char question_mark = '\?';

    // 0b => binary
    // 0x => hexadecimal 
    int val = 42;

    // a pointer in c++ is a memory address
    int *p = &val; // this contains the address of val 
    int **pp1 = &p; // a pointer to a pointer

    // single array 
    // int* vs vec
    // int *arr = new int[10];
    // int **matrix = ...

    // why do we want pointers?
    // its expensive to copy some objects in c++ 
    // its easier to pass numeric references 

    int *p1 = nullptr; // a null pointer does not polint to any object

    // heap vs stack 
    
    // allocates memory on the heap 
    Node *node = new Node(10);
    std::cout << node->val << std::endl;

    return 0;
}