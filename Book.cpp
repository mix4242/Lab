#include "Book.h"
#include "SaleableItem.h"

Book::Book(const char* pTitle,
    unsigned int unitPricePence,
    unsigned int noOfPagesp):SaleableItem(pTitle, unitPricePence)
{
  noOfPages = noOfPagesp;
}

unsigned int Book::getNewPrice(void)
{
  unsigned int tax = 4 * (noOfPages / 10);
  return tax + unitPricePence;
}
