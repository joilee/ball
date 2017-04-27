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
	double l;			//平均边长，边长越小，面片数量越多
	Vector3d center;
	double z1;
	double z2;          //沿着向量方向的最小值， 参数范围为 -r<z2<z1<r
	Vector3d normal;//球心的向量，即建筑物棱边的向量
}BallStruct;

typedef struct pointVer
{
	Vector3d coordinates;
	int id;
	int layerId;
}pv;

//产生任意方向的球面网格
void generateMesh_anyDirection(BallStruct ball, std::vector<Vector3d> &V,std::vector<Vector3i>& F,std::vector<Vector3d> &NF );
//根据向量 平移和旋转所有点
void rotateVertex(BallStruct ball,std::vector<Vector3d> &V);

void generateMesh(BallStruct ball, std::vector<Vector3d> &V,std::vector<Vector3i>& F,std::vector<Vector3d> &NF	);
void generateCirclePoint(double r,double l,Vector3d o,vector<pointVer> &Pset);
void	generateFace(vector<vector<pointVer> >&totalPoint,vector<Vector3i> &F	,std::vector<Vector3d> &NF);
int getNearestVertex(const pointVer a,const vector<pointVer>&b);

#endif