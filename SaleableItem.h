#ifndef SaleableItem_h
#define SaleableItem_h

class SaleableItem
{
  public:
    SaleableItem(const char* pTitlep, unsigned int unitPricePencep);
    const char* getTitle(void);
    virtual unsigned int getNewPrice(void) = 0;
  protected:
    const char* pTitle;
    unsigned int unitPricePence;
};


#endif
