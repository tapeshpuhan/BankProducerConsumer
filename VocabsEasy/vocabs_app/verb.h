#pragma once
#include <QObject>
#include <vocabs_data.h>
#include <set>

class VerbProcess : public QObject
{
Q_OBJECT
public:
    VerbProcess(QObject* parent= nullptr);
    void setLevel(quint8 level);
    void next();
    void repeat();
    void nextPractice();
    bool checkName(const QString& verbName);
    QStringList getOptions()const;
    void repeatPractice();
signals:
    void updateVerb(const Verb&);
    void maxIndex();
    void maxPracticeIndex();

private:
    QVector<Verb> m_verbList;
    QVector<Verb> m_verbTestList;
    size_t m_index{0};
    QStringList m_verbOptions;
    size_t m_randomIndex{0};
    std::set<size_t> indexRecord;
};