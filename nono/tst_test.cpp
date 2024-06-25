#include <QtTest>
#include "../nodnok/chisla.h"
// add necessary includes here

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_nod();
    void test_nok();
};

test::test() {}

test::~test() {}

void test::test_nod() {
    Chisla a;
    QCOMPARE(a.nod(2,3), 1);
    QCOMPARE(a.nod(45, 30), 15);
    QCOMPARE(a.nod(-2,3), 1);
    QCOMPARE(a.nod(7, -77), 7);


}

void test::test_nok() {
    Chisla a;
    QCOMPARE(a.nok(2,3), 6);
    QCOMPARE(a.nok(45,30), 90);
    QCOMPARE(a.nok(-2,3), 6);
    QCOMPARE(a.nok(-7,77), 77);

}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
