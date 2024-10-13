#include "tupel.h" 
#include <iostream>

template <typename T1, typename T2>
int vergleiche(Tupel<T1, T2> tupel1, Tupel<T1, T2> tupel2)
{
	if (tupel1.komponente1 < tupel2.komponente1 && tupel1.komponente2 < tupel2.komponente2)
	{
		return -1;
	}
	else if (tupel1.komponente1 > tupel2.komponente1 && tupel1.komponente2 > tupel2.komponente2)
	{

		return 1;
	}


	return 0;
}


template <typename T>
T add(T p1, T p2)
{
	T summe = p1 + p2;
	return summe;
}

template int vergleiche<int,int>(Tupel<int, int> tupel1, Tupel<int, int> tupel2);
template int vergleiche<std::string, std::string>(Tupel<std::string, std::string> tupel1, Tupel<std::string, std::string> tupel2);
template int vergleiche<int, std::string>(Tupel<int, std::string> tupel1, Tupel<int, std::string> tupel2);
template int vergleiche<std::string, int>(Tupel<std::string, int> tupel1, Tupel<std::string, int> tupel2);

template int add<int>(int, int);