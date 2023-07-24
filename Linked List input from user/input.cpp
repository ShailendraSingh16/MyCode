 #include <iostream>

using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to find the index of 'n' in the linked list
int findIndex(ListNode* head, int n) {
    int index = 0;
    ListNode* current = head;

    while (current != NULL) {
        if (current->val == n) {
            return index;
        }
        current = current->next;
        index++;
    }

    return -1;
}

// Function to create a linked list from an array
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) {
        return NULL;
    }

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}
 
int main() {
    int arr[100000]; // Assuming the maximum size of the linked list is 100000
    int n, num;

    // Input the elements of the singly linked list
    int i = 0;
    while (cin >> num) {
        if (num == -1) {
            break;
        }
        arr[i++] = num;
    }

    int size = i;
    ListNode* head = createLinkedList(arr, size);

    // Input the value 'n' to find
    cin >> n;

    // Find and print the index of 'n'
    int result = findIndex(head, n);
    cout << result << endl;
 

    return 0;
}
