#ifndef Shop_h
#define Shop_h

#include "DVD.h"
#include "SaleableItem.h"
#include <vector>
#include <memory>

using namespace std;

class Shop {
  public:
    void AddBook(const char* pTitle, 
	unsigned int unitPricePence,
	unsigned int noOfPages);
    
    void AddDVD(const char* pTitle, 
	unsigned int unitPricePence,
	unsigned int runningTimeMins,
	DVD::DVDFormat format);
    
    void AddCD(const char* pTitle,
	unsigned int unitPricePence,
	unsigned int runningTimeMins,
	unsigned int noOfTracks);
    
    void ShowTaxedPrices() const;

    vector<shared_ptr<SaleableItem>> saleableItems_;
};


#endif /* #ifndef Included_Shop_h */
