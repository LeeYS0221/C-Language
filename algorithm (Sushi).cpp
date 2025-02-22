#include<iostream>
#include<vector>
#include<memory.h>
#include<algorithm>
using namespace std;

int N, d, k, c;
int flag, cnt, coupon, maxi = 0;
int sushi[300001];
int check[3001];
vector<int> eat;

int main()
{
	// N:���ü� d:�ʹ������� k:�������� C:������ȣ
	cin >> N >> d >> k >> c;
	
	// ȸ����Ʈ �� �ʹ�
	for (int i = 0; i < N; i++) cin >> sushi[i];

	// �����̵� ������
	for (int i = 0; i < N; i++)
	{
		flag = 0; // �ߺ��� ���� üũ
		coupon = 1; // ���� ���ð� �ִ��� Ȯ��
		for (int j = i; j < i + k; j++) 
		{				
			if (check[sushi[j % N]] == 1) flag++; // �̹� ���� �ʹ��� ��� �ߺ� �� ǥ��	
			else check[sushi[j % N]] = 1; // ó�� �Ծ�� �ʹ��� ��� üũ		

			if (sushi[j % N] == c) coupon = 0; // ���� ���� ���� ��
		}

		maxi = max(maxi, k - flag + coupon); //�������� ���� �� �ִ� �ִ����� - �ߺ����� + ��������	
		memset(check, 0, sizeof(check)); // üũ �ʱ�ȭ
	}

	cout << maxi;
}
