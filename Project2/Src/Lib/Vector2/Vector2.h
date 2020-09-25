//-------------------------------------------------
//--------------Project by ------------------------
//----------------------koshiro kawanami-----------
//-------------------------------------------------d
#pragma once
#include <array>
#include <math.h>

#define PI 3.14159265

template<class T>
class Vector2Tmp
{
public:
	Vector2Tmp();
	Vector2Tmp(T x,T y);

	T calcAngle(T x, T y);		// �p�x�����߂�
	T calcSin(T angle);				// y���̃x�N�g�������߂�
	T calcCos(T angle);				// x���̃x�N�g�������߂�
	T calcTwoPtDisComp(T*, T*);		// 2�̃|�C���g�̊Ԃ̋����̍���
	T calcVecX(T dis, T angle);	// �p�x����x��y���̂��ꂼ��̑��x���v�Z����
	T calcVecY(T dis, T angle);	// �p�x����x��y���̂��ꂼ��̑��x���v�Z����
	T x, y;								// ���W�i�[�p�ϐ�
	Vector2Tmp& operator=(const Vector2Tmp& vec2);
	Vector2Tmp& operator+=(Vector2Tmp& vec2);
	Vector2Tmp& operator-=(Vector2Tmp& vec2);
	Vector2Tmp& operator*=(Vector2Tmp& vec2);
	Vector2Tmp& operator/=(Vector2Tmp& vec2);
	Vector2Tmp& operator%=(Vector2Tmp& vec2);

	bool operator==(Vector2Tmp& vec2);
	bool operator!=(Vector2Tmp& vec2);
	bool operator<(Vector2Tmp& vec2);
	bool operator<=(Vector2Tmp& vec2);
};
template<class T>
Vector2Tmp<T> operator+(const Vector2Tmp<T>& vec2, Vector2Tmp<T> vec2_);
template<class T>
Vector2Tmp<T> operator-(const Vector2Tmp<T>& vec2, Vector2Tmp<T> vec2_);
template<class T>
Vector2Tmp<T> operator*(const Vector2Tmp<T>& vec2, Vector2Tmp<T> vec2_);
template<class T>
Vector2Tmp<T> operator/(const Vector2Tmp<T>& vec2, Vector2Tmp<T> vec2_);
template<class T>
Vector2Tmp<T> operator%(const Vector2Tmp<T>& vec2, Vector2Tmp<T> vec2_);

template<class T>
Vector2Tmp<T> operator+(const Vector2Tmp<T>& vec2, T K);
template<class T>
Vector2Tmp<T> operator-(const Vector2Tmp<T>& vec2, T K);
template<class T>
Vector2Tmp<T> operator*(const Vector2Tmp<T>& vec2, T K);
template<class T>
Vector2Tmp<T> operator/(const Vector2Tmp<T>& vec2, T K);
template<class T>
Vector2Tmp<T> operator%(const Vector2Tmp<T>& vec2, T K);

template<class T>
bool operator==(Vector2Tmp<T>& vec2,T k);
template<class T>
bool operator!=(Vector2Tmp<T>& vec2, T k);
template<class T>
bool operator<(Vector2Tmp<T>& vec2, T k);
template<class T>
bool operator<=(Vector2Tmp<T>& vec2, T k);


#include "detail/Vector2.h"
using Vector2 = Vector2Tmp<int>;
using Vector2l = Vector2Tmp<long>;
using Vector2f = Vector2Tmp<float>;
using Vector2d = Vector2Tmp<double>;
using Vector2s = Vector2Tmp<short>;

typedef Vector2 Position2;
