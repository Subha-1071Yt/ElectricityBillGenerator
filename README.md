# ElectricityBillGenerator

A simple yet practical C program that calculates electricity bills based on a tiered pricing structure commonly used in India.

## 📋 Overview

This program implements a **progressive/slab-based billing system** where the cost per unit increases as consumption increases. It's designed to mimic real-world electricity billing practices used by power distribution companies in India.

## 🌟 What Makes This Unique

### 1. **Realistic Tiered Pricing Model**
Unlike simple flat-rate calculators, this system uses a **progressive slab system**:
- **0-100 units**: ₹5 per unit
- **101-200 units**: ₹7 per unit
- **201-300 units**: ₹9 per unit
- **300+ units**: ₹12 per unit

This mirrors actual electricity billing practices where higher consumption is charged at higher rates, encouraging efficient energy usage.

### 2. **Accurate Cumulative Calculation**
The program correctly calculates charges **cumulatively across slabs**, not by applying a single rate to all units. For example:
- 250 units = (100 × ₹5) + (100 × ₹7) + (50 × ₹9) = ₹1,850
- **NOT** 250 × ₹9 = ₹2,250 (which would be incorrect)

### 3. **Practical Real-World Application**
This is a foundational project that demonstrates:
- Real-world problem-solving with conditional logic
- Practical implementation of business rules
- Understanding of utility billing systems
- Foundation for larger fintech/billing applications

### 4. **Foundation for Expansion**
This simple base can be extended to include:
- Multiple user accounts and monthly tracking
- Additional charges (taxes, surcharges, security deposits)
- Payment history and notifications
- Integration with databases for persistent storage
- Web interface for customer dashboards

## 💻 How to Use

### Windows

#### Compilation
```bash
gcc ElectricityBillGenerator.c -o ElectricityBillGenerator.exe
```

#### Execution
```bash
ElectricityBillGenerator.exe
```

#### Example Run
```
===== ELECTRICITY BILL GENERATOR =====
Enter total units consumed: 150

Total Units: 150
Total Amount: ₹1100.00
=================================================
Thank you for using the Electricity Bill System.
```
![image alt](https://github.com/Subha-1071Yt/ElectricityBillGenerator/blob/main/Screenshot.png)
