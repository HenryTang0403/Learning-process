apcs c++自學
===
簡介
---
這個程式庫存了我自學c++的紀錄

有各種基礎c++題解

使用的學習資源
---
[從零到一：那些演算法競賽會用到的基礎語法](https://emanlaicepsa.github.io/2020/10/21/0-index/)

[Yui Huang 演算法學習筆記](https://yuihuang.com/syntax/)

題目統計
---

| 解題平台 | 已解題數 |
|---------|--------|
| NTOJ (TOJ) | 35 題 |
| ZeroJudge | 71 題 |
| **合計** | **106 題** |

解題網站解題紀錄
---

[NTOJ](https://toj.tfcis.org/oj/acct/10870/)

[zerojudge](https://zerojudge.tw/UserStatistic?id=258113)

**(zeorjudge需要登入才能看到因此在下面附上截圖)**

<img width="1896" height="6497" alt="zerojudge tw_UserStatistic_id=258113" src="https://github.com/user-attachments/assets/8d378d6e-a589-4fbd-b380-24fd37e3f731" />

代表性題目
---
> 💡 **註：以下代表性題目的分類與摘要，是由 AI 協助分析本程式庫後整理產生。**

在這個學習階段中，我練習了許多基礎與進階題目。以下挑選出幾題具有代表性的實作紀錄，涵蓋了 APCS 歷屆試題、資料結構、演算法以及基礎邏輯培養：

### 🎯 APCS 歷屆試題實作
這些題目主要來自 APCS 程式設計實作題，幫助我熟悉檢定的題型與難度：
* **[ZeroJudge b964] 105年3月 APCS 第1題 - 成績指標** (`code/zerojudge/b964.cpp`)：練習基礎陣列操作、排序 (`std::sort`) 以及邊界條件的尋找（及格與不及格的最高/最低分）。
* **[ZeroJudge b266 / b965] 105年3月 APCS 第2題 - 矩陣轉換** (`code/zerojudge/b266.cpp`)：實作二維陣列的翻轉 (Flip) 與旋轉 (Rotate)，考驗二維陣列的索引操作與模擬能力。
* **[ZeroJudge b966] 105年3月 APCS 第3題 - 線段覆蓋長度** (`code/zerojudge/b966.cpp`)：學習使用貪婪演算法 (Greedy) 與掃描線概念，結合 `std::pair` 與 `sort` 來計算重疊線段的總長度。
* **[ZeroJudge c290] 106年3月 APCS 第1題 - 秘密差** (`code/zerojudge/c290.cpp`)：利用字串 (`std::string`) 處理大數字，並透過迴圈計算奇數點與偶數點字元的數值總和差。

### 🧠 演算法與資料結構
這部分包含了一些基礎資料結構的應用以及常見的演算法概念：
* **[ZeroJudge e155] 丟掉的撲克牌** (`code/zerojudge/e155.cpp`)：使用 C++ 內建的 `std::queue` 實作先進先出 (FIFO) 的模擬過程。
* **[ZeroJudge a227] 河內塔** (`code/zerojudge/a227.cpp`)：經典的遞迴 (Recursion) 題目，練習將大問題拆解為小問題並透過函式自我呼叫解決。
* **[NTOJ toj15] 貓咪的名字** (`code/NTOJ/toj15.cpp`)：練習自訂 `struct` 以及多重條件的運算子多載 (`operator<`)，以應對複雜的自訂義排序需求。

### ⚙️ 基礎邏輯與數學處理
透過這些題目建立紮實的語法基礎與邏輯思維：
* **[ZeroJudge a006] 一元二次方程式** (`code/zerojudge/a006.cpp`)：結合 `<cmath>` 中的 `sqrt` 函式，練習多重條件判斷（相異實根、相同實根、無實根）。
* **[ZeroJudge d225] 最大公因數總和** (`code/zerojudge/d225.cpp`)：實作輾轉相除法求 GCD，並透過雙重迴圈計算兩兩組合的總和。
* **[NTOJ toj170] 星星樹** (`code/NTOJ/toj170.cpp`)：大量的雙重迴圈與排版練習，根據不同條件輸出各種形狀的圖案。
