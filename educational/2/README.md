<div dir="rtl">

# مقدمه

سلام.  
امیدوارم از مسابقه‌ی آموزشی این هفته خوشتون اومده باشه.  
مسابقه‌ی آموزشی این هفته، درباره‌ی داده ساختار ها و استفاده از اونها برای حل سوال های مسابقات ICPC بود.  
در ادامه می‌خوایم با هم سوالات این مسابقه رو همراه با راه حل هاشون بررسی کنیم.  
  
## A - Box of Bricks
به صورت خلاصه، در ورودی سوال، ارتفاع تعدادی ستون آجری به ما داده میشه و وظیفه‌ی ما اینه که با کمترین تعداد جا‌به‌جایی، تمام ستون ها رو هم ارتفاع کنیم.  
توجه به این نکته هم مهمه که در متن سوال تضمین داده شده که برابر کردن ارتفاع تمام ستون ها حتما امکان پذیره.  
  
اگه n تعداد ستون ها باشه و ارتفاع ستون _i_ م رو با _h_i_ مشخص کنیم، ارتفاع نهایی مورد نظر برای هر ستون برابر

<div dir="ltr">

```
M =  Sum(h_i)/n
```

</div>

خواهد بود. پس به ازای هر ستونی که ارتفاعش بیشتر از _M_ باشد، آجر های اضافی آن را بر می‌داریم و آن ها را روی ستون هایی که ارتفاع کمتری از _M_ دارند می‌گذاریم.  
  
جواب مساله برابر با جمع تعداد آجر‌های اضافی ای خواهد بود که از روی ستون ها برداشته ایم.  
  
  
  
## B - Error Correction
در ورودی سوال، ابتدا عدد n و سپس یک ماتریس _n x n_ داده می‌شود.  
  
هر ماتریس، سه حالت دارد  
۱. جمع اعداد هر سطر و هر ستون زوج است.  
۲. تنها با عوض کردن یکی از خانه های ماتریس، می‌توان آنرا به حالت شماره‌ی ۱ تبدیل کرد.  
۳. برای تبدیل ماتریس به حالت ۱، باید بیشتر از ۱ خانه از ماتریس را عوض کنیم.  
  
توجه کنید که ماتریس ورودی، تنها از صفر و یک تشکیل شده است.  
  
چک کردن یک ماتریس برای این که ببینیم حالت شماره ۱ را دارد یا نه، کار ساده ای است.  
  
بیایید بررسی کنیم که چه ماتریس هایی حالت ۲ هستند. برای این که یک ماتریس حالت ۲ داشته باشیم، میتونیم یک ماتریس حالت ۱ را در نظر بگیریم و یکی از خانه های آن را عوض کنیم.
به راحتی متوجه می‌شویم که ماتریس های حالت ۲، دقیقا یک سطر و دقیقا یک ستون دارند که جمع عناصر آنها فرد می‌شوند.  
درایه‌ای که در محل تقاطع این سطر و ستون قرار دارد، همان درایه ای است که با عوض کردن آن می توان ماتریس را به حالت ۱ تبدیل کرد.  
  
اگر ماتریسی، حالت ۱ یا ۲ نباشد، حالت ۳ است.  
  
  
## C - Hardwood Species
در ورودی سوال نام تعدادی درخت آمده، در هر خط یک درخت. توجه کنید که یک اسم ممکنه چندین بار توی ورودی تکرار بشه.  
در خروجی باید نام تمام درخت های داده شده را به همراه درصد فراوانی اون درخت در بین تمام درخت های ورودی چاپ بشه.  
  
در حل این سوال، داده ساختار Map کمک بسیاری می‌کنه.  
یه توضیح مختصر درباره‌ی Map بدیم.  
توی Cpp میتونید با اضافه کردن کتابخونه‌ی map، داده ساختار هایی از این نوع بسازید.  
تعریف یک map جدید به شکل زیره:  
<div dir="ltr">

```cpp
map<T1, T2> myMap;
```

</div>

و میتونید اینطوری بگید که myMap یک map از T1 به T2 هست.  
حالا میتونید شبیه به آرایه ها، داده های داخل map رو بخونید یا عوض کنید. `myMap[ t1 ] = t2`  
ذکر چند نکته در اینجا مهمه  
یکی این که T1 و T2، نشان دهنده‌ی نوع داده ها هستند. مثلا اگر می‌خواهید یک map از int به string داشته باشید باید بنویسید :  
<div dir="ltr">

```cpp
map<int, string> myMap;

myMap[ 23 ] = “IUT”;
```

</div>

بر خلاف آرایه ها میتونید هر نوع داده ای رو به جای اندیس استفاده کنید.  
برای مثال میتونید map تون رو اینطوری تعریف و استفاده کنید:  
<div dir="ltr">

```cpp
Map <string, double> myMap;

myMap[ “ACM” ] = 2.94
```

</div>

یک نکته‌ی مهم دیگه درباره map اینه که دسترسی به یک خونه، یا عوض کردن مقدار یک خونه، برخلاف آرایه ها در `O(1)` انجام نمیشه. این به این معنیه که کد هایی که از map به جای آرایه ها استفاده می‌کنن، کندتر هستند.  
  
  
## D - What is the Median
صورت سوال ساده است، شما باید در هر لحظه، میانه‌ی اعداد داده شده را چاپ کنید.  
طبق تعریف، میانه برابر عضوی از یک مجموعه است که بتوان بر اساس آن مجموعه را جوری به دو قسمت تقسیم مساوی کرد که تمام اعضای یکی از مجموعه ها کوچکتر مساوی میانه و تمام اعضای مجموعه‌ی دیگر، بزرگتر مساوی میانه باشند.  
  
به راحتی می‌توان دید که اگر تمام اعداد را به صورت مرتب شده کنار هم بنویسیم، میانه برابر عدد وسط (و یا میانگین دو عدد وسط) است.  
  
 
## E - CD
در ورودی سوال ۲ مجموعه از اعداد به شما داده می‌شود.  
پاسخ سوال برابر اندازه‌ی اشتراک این دو مجموعه است.  
  
در زبان cpp می‌توان با استفاده از کتابخانه‌ی set به داده ساختار مجموعه یا همان set دسترسی داشت.  
  
تعریف یک مجموعه‌ی جدید از جنس اعداد صحیح به صورت زیر است:  
<div dir="ltr">

```cpp
set<int> mySet;
```

</div>
برای اضافه‌کردن یک عنصر به مجموعه:  
<div dir="ltr">

```cpp
mySet.insert(2017);
```

</div>
و برای حذف کردن یک عنصر از آن:  
<div dir="ltr">

```cpp
mySet.erase(2017);
```

</div>
برای فهمیدن اندازه‌ی یک مجموعه:  
<div dir="ltr">

```cpp
mySet.size();
```

</div>
و برای پیدا کردن یک عنصر در آن می توانیم بنویسیم:  
<div dir="ltr">

```cpp
mySet.find(2017);
```

</div>

اگر مقدار مورد نظر در مجموعه نباشد، خروجی دستور بالا، <span dir="ltr"> `mySet.end()` </span> خواهد بود.  
  
نکته‌ی مهم درباره‌ی استفاده از set اینه که یک مجموعه عضو تکراری نداره. برای همین اگه یه عنصر خاص رو چندین بار هم به یک مجموعه اضافه کنید، فقط یکی از این مقدار ها به مجموعه اضافه خواهد شد.  
  
## F - Do Your Own Homework
این سوال را می‌توانید با استفاده از map و set به راحتی حل کنید.

## مطالعه‌ی بیشتر
برای مطالعه‌ی بیشتر و آشنایی دقیق تر با داده ساختار های استاندارد در زبان سی پلاس پلاس، به منابع زیر مراجعه کنید:  

- http://www.cplusplus.com/reference/map/map/
- http://www.cplusplus.com/reference/set/set/
- http://www.cplusplus.com/reference/vector/vector/
- http://www.cplusplus.com/reference/algorithm/

</div>
