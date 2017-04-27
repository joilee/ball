// ball.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ball2Triangle.h"

int _tmain(int argc, _TCHAR* argv[])
{
	BallStruct ball;
	ball.center=Vector3d(0,0,0);
	ball.r=10;
	ball.l=2;
	ball.z1=4;
	ball.z2=-2;
	ball.normal=Vector3d(0,0,-1).normalize();
	vector<Vector3d> V;
	vector<Vector3i> F;
	vector<Vector3d>NF;
	cout<<"info: 开始"<<endl;
	generateMesh_anyDirection(ball,V,F,NF);
	cout<<"success: 球面已经生成"<<endl;
	getchar();
	return 0;
}

