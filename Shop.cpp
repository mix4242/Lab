#include <iostream>
#include "Shop.h"
#include "SaleableItem.h"
#include "Book.h"
#include "CD.h"
#include "DVD.h"
#include <vector>

using namespace std;

void Shop::AddBook(const char* pTitle, unsigned int unitPricePence,
    unsigned int noOfPages)
{
  Book *book = new Book(pTitle, unitPricePence, noOfPages);
  shared_ptr<SaleableItem> pSaleableItem(book);
  saleableItems_.push_back(pSaleableItem);
}

void Shop::AddDVD(const char* pTitle, unsigned int unitPricePence,
    		unsigned int runningTimeMins,
		DVD::DVDFormat format)
{
  DVD *dvd = new DVD(pTitle, unitPricePence, runningTimeMins, format);
  shared_ptr<SaleableItem> pSaleableItem(dvd);
  saleableItems_.push_back(pSaleableItem);
}

void Shop::AddCD(const char* pTitle, unsigned int unitPricePence,
		unsigned int runningTimeMins,
		unsigned int noOfTracks)
{
  CD *cd = new CD(pTitle, unitPricePence, runningTimeMins, noOfTracks);
  shared_ptr<SaleableItem> pSaleableItem(cd);
  saleableItems_.push_back(pSaleableItem);
}

void Shop::ShowTaxedPrices() const
{
  for( auto& item : saleableItems_ )
  {
    cout << item->getTitle() << ": " << item->getNewPrice() <<
      " pence" << endl;
  }

}
