#include <vector> 
#include <algorithm>
#include <type_traits> 

using std::vector ; 
template <typename T> 
concept Arithmetic=std::is_arithmetic_v<T> ; 


template <Arithmetic T> vector<T> func(vector<T> houses) 
{
	T maxEl{} ;
	vector<T> output{} ; 
	for(auto it{houses.rbegin() }; it!=houses.rend() ; it++) 
	 {
		if(*it>maxEl) {
           output.push_back(*it) ; 
		   maxEl=*it ; 
		 }
	 }
	 return output ; 	
}

/*vector<int> func(vector<int> houses,size_t n) {
	if(houses.size()!=n) return vector<int>{} ; 

	vector<int> output{} ; 
	
	int maxEl=0 ; 
	for(auto i=n-1 ; i!=0 ; i--) {
	  if(houses[i]>maxEl) {
		   output.push_back(houses[i]) ; 
		   maxEl=houses[i] ; 
		 }
	}
	
	return output ; 
} */
