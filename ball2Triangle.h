#ifndef BALLTRIANGLE
#define  BALLTRIANGLE

#include <iostream>
#include <vector>
#include "vector.h"
#define  _USE_MATH_DEFINES
using namespace std;
typedef struct Ball
{
	double r;
	double l;			//ƽ���߳����߳�ԽС����Ƭ����Խ��
	Vector3d center;
	double z1;
	double z2;          //���������������Сֵ�� ������ΧΪ -r<z2<z1<r
	Vector3d normal;//���ĵ�����������������ߵ�����
}BallStruct;

typedef struct pointVer
{
	Vector3d coordinates;
	int id;
	int layerId;
}pv;

//�������ⷽ�����������
void generateMesh_anyDirection(BallStruct ball, std::vector<Vector3d> &V,std::vector<Vector3i>& F,std::vector<Vector3d> &NF );
//�������� ƽ�ƺ���ת���е�
void rotateVertex(BallStruct ball,std::vector<Vector3d> &V);

void generateMesh(BallStruct ball, std::vector<Vector3d> &V,std::vector<Vector3i>& F,std::vector<Vector3d> &NF	);
void generateCirclePoint(double r,double l,Vector3d o,vector<pointVer> &Pset);
void	generateFace(vector<vector<pointVer> >&totalPoint,vector<Vector3i> &F	,std::vector<Vector3d> &NF);
int getNearestVertex(const pointVer a,const vector<pointVer>&b);

#endif