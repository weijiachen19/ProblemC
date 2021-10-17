#pragma once
#include<string>
#include<vector>
enum BottomType
{
	Shi=1,
	Sha=2,
	Ni=3,
};

enum ClearingType  //��ɨ����
{
	Type1,
	Type2,
	Type3,
	Type4,
};

class Mine
{
public:
	int stateTime;             //����״̬
	int j;                     //���ŵ���󶨴���
	double maxRange;           //��Զ̽�����
	double hang;
	double lie;
	double z;
	int weight;
	Mine(double hang = 0, double lie = 0, double z = 18)
	{
		this->maxRange = maxRange;
		this->hang = hang;
		this->lie = lie;
		this->z = z;
	}
};

class ChendiMine:
	public Mine
{
public:
	ChendiMine(double hang = 0, double lie = 0, double z = 18):
		Mine(hang, lie, z)
	{
		weight = 1000;
	}
};

class MaoMine :
	public Mine
{
public:
	MaoMine(double hang = 0, double lie = 0, double z = 18):
		Mine(hang, lie, z)
	{
		weight = 650;
	}
};
