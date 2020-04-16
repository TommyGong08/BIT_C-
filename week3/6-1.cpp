#include "stack3.h"
#include "../require.h"
using namespace std;

Stack::Link::Link(void* dat, Link* nxt) //结构体Link的构造函数
{
  data = dat;
  next = nxt;
}

Stack::Link::~Link() { }//结构体Link的析构函数

Stack::Stack() 
{
     head = 0; 
}//Stack构造函数

Stack::~Stack() //Stack的析构函数
{
  require(head == 0, "Stack not empty");
}

void Stack::push(void* dat) 
{
  head = new Link(dat,head);
}

void* Stack::peek() 
{ 
  require(head != 0, "Stack empty");
  return head->data; 
}

void* Stack::pop() 
{
  if(head == 0) return 0;
  void* result = head->data;
  Link* oldHead = head;
  head = head->next;
  delete oldHead;
  return result;
}

