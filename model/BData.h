#ifndef BDATA_H
#define BDATA_H

#include <vector>

using namespace std;

class BData
{
protected:
    int m_iId;
public:
    BData();
    virtual void select()=0;
    virtual std::vector<BData*> selectAll()=0;
    virtual void update()=0;
    virtual void insert()=0;
    virtual void remove()=0;
    int getId() const;
    void setId(int iId);
};

#endif // BDATA_H
