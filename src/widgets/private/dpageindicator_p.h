#ifndef DPAGEINDICATOR_P_H
#define DPAGEINDICATOR_P_H

#include "dpageindicator.h"
#include <DObjectPrivate>

DWIDGET_BEGIN_NAMESPACE

class DPageIndicatorPrivate : public DTK_CORE_NAMESPACE::DObjectPrivate
{
    D_DECLARE_PUBLIC(DPageIndicator)

public:
    DPageIndicatorPrivate(DPageIndicator *q);

    void setPageCount(const int count);
    void nextPage();
    void previousPage();
    void setCurrentPage(const int index);

public:
    int m_pageCount;
    int m_currentPage;
    QColor m_color;
    QColor m_secondaryColor;
};

DWIDGET_END_NAMESPACE

#endif // DPAGEINDICATOR_P_H