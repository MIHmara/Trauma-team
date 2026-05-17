# Quiz Application — Trauma Team

## Описание
Това е quiz приложение, разработено на C++, което позволява избор на категории въпроси, търсене на въпроси, сортиране на резултати и изчисляване на общия резултат чрез рекурсия. Приложението включва GUI функционалности за избор на въпроси и проследяване на резултатите.

---

## Функционалности
- Меню за избор на категории въпроси  
- Търсене на въпроси по ключови думи  
- Сортиране на резултатите по различни критерии  
- Рекурсивно изчисляване на общия резултат  
- GUI интерфейс за по‑лесна работа  
- Проследяване и визуализиране на резултатите  

---

## Архитектура
Проектът използва трислойна архитектура:
- **Presentation слой** — графичен интерфейс и взаимодействие с потребителя  
- **Logic слой** — бизнес логика, обработка на въпроси, резултати и рекурсия  
- **Data слой** — зареждане, съхранение и управление на данните  

---

## Technologies
- C++17
- STL (Standard Template Library  
- File I/O за работа с текстови файлове
- Рекурсия за изчисляване на резултати
- Модулна архитектура (Presentation / Logic / Data)
- GitHub за управление на версиите

---

## Team — Trauma
- Scrum Trainer - Мирослава Хмара
- Front-End developer - Ангел Фриедириш
- Documentation - Мартин Бъчваров
- Designers - Виктор Георгиев, Сияна Пеева

---

## Documentation & Presentation
- Documentation :
- Presentation :

---

## Организация на файловете
```text
ProjectRoot/
│
├── main.cpp
├── categories.txt
├── questions.txt
├── results.txt
│
├── Presentation/
│   ├── GUI.h
│   └── GUI.cpp
│
├── Logic/
│   ├── Question.h
│   ├── Question.cpp
│   ├── CategoryManager.h
│   ├── CategoryManager.cpp
│   ├── QuizController.h
│   └── QuizController.cpp
│
├── Data/
│   ├── DataManager.h
│   └── DataManager.cpp
│
├── Headers/
│   ├── Utils.h
│   ├── Types.h
│   └── Constants.h
│
└── Source/
    ├── Utils.cpp
    └── Helpers.cpp
