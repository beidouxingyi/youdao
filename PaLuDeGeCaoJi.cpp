#include <bits/stdc++.h>

#define elif                               else if
#define dc(vType, vName)                   vType vName; cin >> vName;
#define dca(arrType, arrName, arrLength, CinTimes) arrType arrName[arrLength]; for (int i=0; i<CinTimes; i++) cin >> arrName[i];
#define dca2(arrType, arrName, arrLength1, arrLength2, CinTimes1, CinTimes2) arrType arrName[arrLength1][arrLength2]; for (int i=0; i<CinTimes1; i++) for (int j=0; j<CinTimes2; j++) cin >> arrName[i][j];
#define oa(arrName, arrLength)             for (int i=0; i<arrLength; i++) cout << arrName[i];
#define oas(arrName, arrLength)            for (int i=0; i<arrLength; i++) cout << arrName[i] << " ";
#define trstr(varName, strName)            for (uint64 varName=0; varName<strName.size(); varName++)
#define getRandom(min, max)                (rand() % (max-min+1) + (min))
#define dcn                                dc(int, n)
#define dcx                                dc(int, x)
#define dck                                dc(int, k)
#define dcan                               dca(int, arrint, n, n)

using namespace std;

typedef signed    char         int8  , *Pint8   ;
typedef signed    short        int16 , *Pint16  ;
typedef signed    int          int32 , *Pint32  ;
typedef signed    long long    int64 , *Pint64  ;
typedef unsigned  char         uint8 , *Puint8  ;      //**************************
typedef unsigned  short        uint16, *Puint16 ;      //      项目: 帕鲁的割草机 https://oj.youdao.com/contest/10750/review#/1/18882
typedef unsigned  int          uint32, *Puint32 ;      //      作者: 吴天右
typedef unsigned  long long    uint64, *Puint64 ;      //      时间: 2024/4/7
typedef const     char         cint8 , *Pcint8  ;      //      版本: 1.0
typedef const     short        cint16, *Pcint16 ;      //**************************
typedef const     int          cint32, *Pcint32 ;
typedef const     long long    cint64, *Pcint64 ;
typedef const     std::string  constr, *Pconstr ;

int main(int argc, char *argv[], char *envp[])
{
    int n = 0, m = 0, a[1005] = {0}, res = 0;
    
    cin >> n >> m;
    
    for (int i=1; i<=n; i++)
    {
        a[0] = INT_MIN;
        
        for (int j=1; j<=m; j++)
        {
            cin >> a[j];
            a[0] = max(a[0], a[j]);
        }
        
        int count = 0;
        for (int j=1; j<=m; j++)
        {
            if (a[j] == a[0])
                count ++;
        }
        
        res += a[0] * count;
    }
    
    cout << res;
    
    return 0;
}
