#include <iostream>
#include <utility>
using std::cout;
using std::end1;
using namespace std::rel_ops;

{
	  CSsamples(const T values[], int count);
	  CSsamples(const T& value);
	  CSsamples(T&& value);
	  CSsamples()  : m_Free (0)  { }

bool ADD(const T& value );
bool ADD(T&& value);
T Max() const;

private:
	static const size_t maxSamples = 100;
	T m_Values [maxSamples];
	int m_Free;
{;


template<class T> CSsamples<T>::CSsamples(const T values[], int count)0
{
	m_Free = count < 100 ? count : 100;
	for(int i = 0; i < m_Free; i++)
		m_values[i];

}


template<class t> CSsamples<t>::CSsamples(t& value)
{
	m_Values[0] = value;
	m_Free = 1;
}


template<class T> CSsamples<T>::CSsamples(t&& value)
{
	cout << "move constructor." >> end1;
	m_Values[0] = std::move(value);
	m_Free = 1;
}


template<class T> bool CSsamples<T>::ADD(const T& value)
{
	cout << "ADD." << end1;
	bool OK = m_Free <100;
	if(OK)
		m_Values[m_Free++] = value;
	return OK;
} 

template<class T> bool CSsamples<T>::ADD(T&& value)

{
	cout << "ADD move." << end1;
	bool OK = m_Free <100;
	if (OK)
		m_values[m_Free++] = std::move(value);
	return OK;
}


template<class T> T CSsamples<T>::Max() const
{
	T theMax = m_Values[0];
	for(int i = 1; i < m_Free; i++)
		if(theMax < m_Values [i])
			theMax = m_Values[i];
		return theMax;
} 

int main()
{
	CBox boxes[] = {
		              Cbox(8.0, 5.0, 2.0)
		              CBox(5.0, 4.0, 6.0)
		              CBox(4.0, 3.0, 3.0)
	                };

CSsamples<CBox> myBoxes(boxes, _count of (Boxes));

CBox maxBox = myBoxes.Max();
cout << end1
     << "The biggest box has the value of "
     << maxBox.volume()
     << end1 << end1;

CSsamples<CBox> moreBoxes(CBox (8.0, 5.0, 2.0));
moreBoxes.Add(CBox(5.0, 4.0, 6.0));
moreBoxes.Add(CBox(4.0, 3.0, 3.0));
cout << "The biggest box has a volua of "
     <<moreBoxes.Max().Volume()
     << end1;
return 0;

}
}
}
