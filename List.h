﻿//  : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>




struct ListNode

{

public:

    ListNode(int value, ListNode* prev, ListNode* next);




public:

    int value;

    ListNode* prev;

    ListNode* next;

};







class List

{

public:

    List();

    virtual ~List();

    bool Empty();

    unsigned long Size();

    void PushFront(int value);

    void PushBack(int value);

    int PopFront();

    int PopBack();

    void Clear();




private:

    ListNode* extractPrev(ListNode* node);

    ListNode* m_head;

    ListNode* m_tail;

    unsigned long m_size;

};