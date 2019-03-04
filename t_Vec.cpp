template<class T> class Vec: public vector<T>
{
public:
	Vec() :vector<T>(){}
	Vec(int s) : vector<T>(s){}
	
	T& operator[] (int i){return at(i);}
	const T& operator[](int i) const {return at(i);}
};