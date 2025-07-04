# Bus-Seat-Numbering

---

### 🧠 **Goal**:

Given a seat number (1 to 30), determine what type of seat it is:

* **Lower Single**
* **Lower Double**
* **Upper Single**
* **Upper Double**

---

### 🚌 **Seat Layout Assumption**:

Since the image isn't available, we follow a **logical pattern** used in such problems:

#### 🔻 Lower Deck: Seats 1 to 15

* **Seats 1 to 10** → `Lower Double` (double means two seats are side-by-side)
* **Seats 11 to 15** → `Lower Single` (single seat, often next to the aisle or in the back corner)

#### 🔺 Upper Deck: Seats 16 to 30

* **Seats 16 to 25** → `Upper Double`
* **Seats 26 to 30** → `Upper Single`

This division ensures:

* 10 double seats per deck (2 seats × 5 rows = 10)
* 5 single seats per deck

---

### 🔢 Sample Classification:

| Seat Number | Category     |
| ----------- | ------------ |
| 1           | Lower Double |
| 12          | Lower Single |
| 24          | Upper Double |
| 30          | Upper Single |

---

### 🔄 How the Code Works:

```cpp
string classifySeat(int seat) {
    if (seat >= 1 && seat <= 10)
        return "Lower Double";
    else if (seat >= 11 && seat <= 15)
        return "Lower Single";
    else if (seat >= 16 && seat <= 25)
        return "Upper Double";
    else if (seat >= 26 && seat <= 30)
        return "Upper Single";
    else
        return "Invalid Seat";
}
```

* It **checks** the range of the seat number:

  * If it's 1–10 → it's a Lower Double
  * If it's 11–15 → Lower Single
  * If it's 16–25 → Upper Double
  * If it's 26–30 → Upper Single
  * Otherwise → "Invalid Seat" (in case someone enters a number outside 1–30)

Then it prints the category for each test case.

---

### ✅ Example Input:

```
4
1
12
24
30
```

### ✅ Example Output:

```
Lower Double
Lower Single
Upper Double
Upper Single
```

---

Let me know if you get an actual image of the seat layout — I’ll adjust the logic accordingly!
