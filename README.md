# BaekjoonSolution

백준 온라인 저지(BOJ) 문제 풀이 저장소입니다. C++17로 풀었습니다.

| 티어 | 문제 수 |
| :--- | ---: |
| Platinum | 1 |
| Gold | 8 |
| Silver | 47 |
| Bronze | 20 |
| **합계** | **76** |

## 폴더 구조

```
Tier/
├── Platinum/   1517.cpp
├── Gold/       1484.cpp  1806.cpp  2230.cpp  2467.cpp …
├── Silver/     1026.cpp  1205.cpp  1235.cpp  1244.cpp …
└── Bronze/     1075.cpp  1110.cpp  1259.cpp  2145.cpp …
```

파일 이름이 곧 백준 문제 번호입니다. 예) `Tier/Silver/1920.cpp` → https://www.acmicpc.net/problem/1920

## 실행

```bash
g++ -std=c++17 -O2 Tier/Silver/1920.cpp -o run && ./run
```

입출력은 표준 입출력을 사용합니다. 빠른 입출력이 필요한 문제는 `ios::sync_with_stdio(false); cin.tie(NULL);` 를 사용했습니다.

## 푼 문제

**Platinum (1)**
[1517](https://www.acmicpc.net/problem/1517)

**Gold (8)**
[1484](https://www.acmicpc.net/problem/1484) · [1806](https://www.acmicpc.net/problem/1806) · [2230](https://www.acmicpc.net/problem/2230) · [2467](https://www.acmicpc.net/problem/2467) · [2493](https://www.acmicpc.net/problem/2493) · [5430](https://www.acmicpc.net/problem/5430) · [11509](https://www.acmicpc.net/problem/11509) · [17298](https://www.acmicpc.net/problem/17298)

**Silver (47)**
[1026](https://www.acmicpc.net/problem/1026) · [1205](https://www.acmicpc.net/problem/1205) · [1235](https://www.acmicpc.net/problem/1235) · [1244](https://www.acmicpc.net/problem/1244) · [1292](https://www.acmicpc.net/problem/1292) · [1337](https://www.acmicpc.net/problem/1337) · [1417](https://www.acmicpc.net/problem/1417) · [1427](https://www.acmicpc.net/problem/1427) · [1475](https://www.acmicpc.net/problem/1475) · [1713](https://www.acmicpc.net/problem/1713) · [1764](https://www.acmicpc.net/problem/1764) · [1874](https://www.acmicpc.net/problem/1874) · [1913](https://www.acmicpc.net/problem/1913) · [1920](https://www.acmicpc.net/problem/1920) · [1929](https://www.acmicpc.net/problem/1929) · [1940](https://www.acmicpc.net/problem/1940) · [1978](https://www.acmicpc.net/problem/1978) · [2003](https://www.acmicpc.net/problem/2003) · [2018](https://www.acmicpc.net/problem/2018) · [2108](https://www.acmicpc.net/problem/2108) · [2303](https://www.acmicpc.net/problem/2303) · [2578](https://www.acmicpc.net/problem/2578) · [2910](https://www.acmicpc.net/problem/2910) · [2947](https://www.acmicpc.net/problem/2947) · [2960](https://www.acmicpc.net/problem/2960) · [3273](https://www.acmicpc.net/problem/3273) · [6550](https://www.acmicpc.net/problem/6550) · [7568](https://www.acmicpc.net/problem/7568) · [7795](https://www.acmicpc.net/problem/7795) · [10546](https://www.acmicpc.net/problem/10546) · [10773](https://www.acmicpc.net/problem/10773) · [10815](https://www.acmicpc.net/problem/10815) · [10816](https://www.acmicpc.net/problem/10816) · [10867](https://www.acmicpc.net/problem/10867) · [10989](https://www.acmicpc.net/problem/10989) · [11004](https://www.acmicpc.net/problem/11004) · [11399](https://www.acmicpc.net/problem/11399) · [11652](https://www.acmicpc.net/problem/11652) · [11723](https://www.acmicpc.net/problem/11723) · [11728](https://www.acmicpc.net/problem/11728) · [11866](https://www.acmicpc.net/problem/11866) · [12789](https://www.acmicpc.net/problem/12789) · [12871](https://www.acmicpc.net/problem/12871) · [14582](https://www.acmicpc.net/problem/14582) · [16435](https://www.acmicpc.net/problem/16435) · [17609](https://www.acmicpc.net/problem/17609) · [20551](https://www.acmicpc.net/problem/20551)

**Bronze (20)**
[1075](https://www.acmicpc.net/problem/1075) · [1110](https://www.acmicpc.net/problem/1110) · [1259](https://www.acmicpc.net/problem/1259) · [2145](https://www.acmicpc.net/problem/2145) · [2442](https://www.acmicpc.net/problem/2442) · [2443](https://www.acmicpc.net/problem/2443) · [2444](https://www.acmicpc.net/problem/2444) · [2446](https://www.acmicpc.net/problem/2446) · [2869](https://www.acmicpc.net/problem/2869) · [5597](https://www.acmicpc.net/problem/5597) · [9093](https://www.acmicpc.net/problem/9093) · [10718](https://www.acmicpc.net/problem/10718) · [10818](https://www.acmicpc.net/problem/10818) · [10871](https://www.acmicpc.net/problem/10871) · [10988](https://www.acmicpc.net/problem/10988) · [10998](https://www.acmicpc.net/problem/10998) · [15552](https://www.acmicpc.net/problem/15552) · [16466](https://www.acmicpc.net/problem/16466) · [20053](https://www.acmicpc.net/problem/20053) · [21756](https://www.acmicpc.net/problem/21756)

## 메모

- 2021.11 ~ 2022.02 에 푼 문제를 티어별로 정리했습니다.
- 알고리즘 유형: 정렬, 투 포인터, 스택, 이분 탐색, 누적 합
- 각 파일은 문제 번호로만 구분하며, 코드에는 주석을 달지 않았습니다.
