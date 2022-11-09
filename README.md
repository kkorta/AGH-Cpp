# Macierz 2x2
# TODO: - ponizsza tresc jest skopiowana z lab2, dlatego prosze ją na razie zignorować
Przeciążanie operatorów na przykładzie Macierzy:
1. Zaimplementuj klasę `TwoDimensionMatrix` odzwierciedlajaca macierz 2*2, zawierającą:
    - tablice typu `MatrixElement` (tzn. `int`), oraz `size` (=2)
    - konstruktory:
        - bezargumentowy - zerujący wszystkie elementy
        - kopiujący
        - przyjmujący jako argument tablicę `const MatrixElement matrix[size][size]` i kopiujący z niej wartości
    - funkcja składowa do dostępu do elementów (`get()` zwracająca odpowiedni element
    - funkcja zwracająca size o nazwie (`getSize()`), proponuję aby była static constexpr
2. Uzupełnij klasy o następujące operacje zdefiniowane poprzez przeciążenie operatorów:
    - operator przypisania kopiujący (głęboko): `operator=()`
    - operatory wypisywania do strumienia (funkcja zewn.) - forma dowolna, byleby wszystkie elementy były w strumieniu
    - operatory wczytywania z strumienia (funkcja zewn.) - format dla macierzy:
      ```
      { a, b }
      { c, d }
      ```
      powinno się odbyć:
      ```
        a b
        c d
      ```
    - operatory arytmetyczne (stosujące odpowiednie operacje na macierzach):
        - `TwoDimensionMatrix operator+(const TwoDimensionMatrix& matrix1, const TwoDimensionMatrix& matrix2); // jako funkcja globalna`
        - `TwoDimensionMatrix& operator*=(MatrixElement number); // metoda klasy`
        - Zadany operator logiczny (metoda klasy):
          `TwoDimensionMatrix operator&&(const TwoDimensionMatrix& matrix) const;`
        - operator tablicowy dostający się po indeksie do pierwszego z wymiarów tablicy (metoda klasy), **proszę pamiętać o wersji const**
          `MatrixElement* operator[](size_t i);`
        - operator konwersji do size_t, zwracający to co `getSize()` (metoda klasy),
    Deklaracja klasy i funkcji globalnych powinna się znaleźć w pliku "matrix.h", natomiast definicje funkcji zewnętrznych i metod klas w pliku źródłowym "matrix.cpp"
____________________________________________________________________________________
## Uwaga:
Wszystkie atrybuty powinny być prywatne, konstruktory i metody - publiczne,
metody większe niż 1-linijkowe powinny być zadeklarowane w klasie, zdefiniowane
poza klasą, obiekty typów klasowych powinny być w miarę możliwości przekazywane
w argumentach funkcji przez referencję, proszę też stosować słówko "const" w
odpowiednich miejscach.

Mozna tworzyc dowolna ilosc metod pomocniczych, jednakze aby byly one prywatne.
____________________________________________________________________________________
## Punktacja:
- Na maksa przejście wszystkich testów.
- Warto też aby kompilator nie zawierał warningów kompilacji - na pierwszych kilku laboratoriach nie wpływa to na ocenę, niemniej jednak ignorowanie warningów to złe nawyki, które mogą nam dołożyć pracy (wielokrotnie gdzieś się pojawia błąd, którego by nie było jakby się warningi poprawiło).
- W przyszłych laboratoriach kod będzie jeszcze testowany przez narzędzie `cppcheck`, które dokonuje statycznej analizy kodu, nie jest ono "nieomylne" jak kompilator, niemniej jednak warto je zadowolić
- Niewykluczone, że w przyszłych zajęciach będzie używane narzędzie `valgrind` - do wykrywania wycieków pamięci.
____________________________________________________________________________________
## Najczestrze pytania:
1. Jak ma działać && dla macierzy?
    Wykonująca na każdym z elementów &&, czyli:
    ```
    { 0, 0 }      { 0, 6 }      { 0, 0 }
    {-3, 9 }  &&  { 0, -9 }  =  { 0, 1 }
    ```
2. Jak ma działać operator tablicowy []?
    Operator ten przyjmuje tylko jeden argument (poza this), a chcemy odnieść się w następujący sposób:
    `matrix[row][column]`, dlatego ten operator musi zwrócić matrix[row] typu `MatrixElement*`.
3. Mam operator indeksowania [], a kompilator jakby go nie widzi.
    To najczęstrzy błąd w tym zadaniu - muszą być dwie wersje - jedna zwykła, a druga stała (przydomek `const`)
____________________________________________________________________________________
# Pytania po implementacji ćwiczenia:
@note A. Jaka jest różnica między przeciążaniem operatorów jako metoda klasy vs jako funkcja?
@note B. Których operatorów nie da się przeciążać?
@note C. Wymień operatory mające różną ilość argumentów?
@note D. Jakie konsekwencje będzie miało przeciążanie operatorów logicznych? (chodzi o lazy-evaluation)

## Grading (section copied from Mateusz Ślażyński, of course he agreed):

* [ ] Make sure, you have a **private** group
  * [how to create a group](https://docs.gitlab.com/ee/user/group/#create-a-group)
* [ ] Fork this project into your private group
  * [how to create a fork](https://docs.gitlab.com/ee/user/project/repository/forking_workflow.html#creating-a-fork)
* [ ] Add @bobot-is-a-bot as the new project's member (role: **maintainer**)
  * [how to add an user](https://docs.gitlab.com/ee/user/project/members/index.html#add-a-user)

## How To Submit Solutions

* [ ] Clone repository: git clone:
    ```bash
    git clone <repository url>
    ```
* [ ] Solve the exercises
* [ ] Commit your changes
    ```bash
    git add <path to the changed files>
    git commit -m <commit message>
    ```
* [ ] Push changes to the gitlab main branch
    ```bash
    git push -u origin main
    ```

The rest will be taken care of automatically. You can check the `GRADE.md` file for your grade / test results. Be aware that it may take some time (up to one hour) till this file

## Project Structure

    .
    ├── zaj2Matrix                # directory containing exercises
    │   ├── ..
    │   ├── CMakeLists.txt        # CMake configuration file
    │   ├── main.cpp              # main file
    │   ├── matrix.cpp            # file to implement methode
    │   ├── matrix.h              # file to create class declaration
    │   ├── matrixElement.h       # file containing type alias
    │   ├── trescPdf.pdf          # documentation in PDF (generated by Doxygen)
