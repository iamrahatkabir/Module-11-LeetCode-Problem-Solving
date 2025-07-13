#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

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

    void reverse(ListNode* &head, ListNode* temp)
    {
        if(temp->next == NULL)
        {
            head = temp;
            return;
        }
        reverse(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;

    }


    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL)
            return head;

        reverse(head, head);

        return head;
    }
};

int main()
{
    

    return 0;
}