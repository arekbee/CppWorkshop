template <class T>
class Accumulator
{
private: 
	T total;
public:
	Accumulator(T start): total(start) {};
	T operator+=(const T& t){return total = total + t;};
	T GetTotal() {return total;}
};
