#ifndef Book_h
#define Book_h

#include "SaleableItem.h"

class Book :public SaleableItem {
  public:
    Book(const char* pTitle,
	unsigned int unitPricePence,
	unsigned int noOfPagesp);
    unsigned int getNewPrice(void);

  private:
    unsigned int noOfPages;

};

#endif

