#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

class MyStack
{
	private:
		Node *head=NULL;

	public:
		bool kosong()
		{
			if(head==NULL)
				return true;
			return false;
		}

		void push(int a)
		{
			Node *baru=new Node;
			baru->val=a;
			baru->next=NULL;
			if(kosong())
			{
				head=baru;
			}
			else
			{
				baru->next=head;
				head=baru;
			}
		}

		int pop()
		{
			if(kosong())
			{
				cout<<"Stack kosong!"<<endl;
				return 0;
			}
			else
			{
				int a=head->val;
				Node *tmp=head->next;
				delete head;
				head=tmp;
				return a;
			}
		}

		void tampil()
		{
			if(kosong())
			{
				cout<<"stack kosong!";
			}
			else
			{
				Node *bantu=head;
				while(bantu!=NULL)
				{
					cout<<bantu->val<<endl;
					bantu=bantu->next;
				}
			}
		}
};

int main()
{
	MyStack a;
	int menu,nilai;
	while (menu!=4)
	{
		cout<<endl<<"STACK! Menu:"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Tampilkan"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Pilih: ";
		cin>>menu;
		switch(menu)
		{
			case 1:
				cout<<"Masukan nilai: ";
				cin>>nilai;
				a.push(nilai);
				break;

			case 2: 
				cout<<"Nilai yang dikeluarkan: "<<a.pop()<<endl;
				break;

			case 3:
				cout<<"Isi stack: "<<endl;
				a.tampil();
				break;
			case 4:
				cout<<"Terimakasih sudah menggunakan"<<endl;
				break;
			default:
				cout<<"Pilihan salah!"<<endl;
				break;
		}
	}

	return 0;
}
