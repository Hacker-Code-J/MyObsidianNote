#Rust

메모리 = 도마 + 냄비 + 냉장 (냉동실, 냉장실)

1. 음식을 조리한다.
2. 도마 위에는 정해진 양(2인분, 4인분)들의 재료들이 올라가 있다.
3. 냉장실(단기 보관) 안에는 통들이다. (채소통, 계란통 등 여러개의 통) 통 안의 내용물은 줄어들어나 늘어날 수 있다. 통의 크기는 유지되지만 내용물은 늘어난다. 가끔 더 큰 통으로 바꿀 필요가 있다.
4. 냄비(또는 렌지)에 재료를 넣고 음식을 조리하며 음식이 나온다.
5. 냉동실(장기 보관)

1. Process, Thread, Function
2. Stack Data. 도마 = Stack, Data on the stack should be sized.
3. 냉장실(Heap), 통 = Un-sized Data Type = String<Characters>, Vec<Types>
4. 재료를 넣는다 = Input, Argument, Prarmeter, Binding, Assignment. 음식이 나온다 = Return Value, Break
5. 냉동실 = Static, Constant, Const 냉장실 = Versatile

통과 음식의 관계 = Data Type과 Value의 관계
모든 데이터는 각기 적절한 Type에 들어간다.

프로그램 시작과 끝이 있다.
프로그램 처음부터 끝까지 사용되는 데이터는 냉동실에 있다.
프로그램의 일정 구간에서만 사용되는 데이터는 냉장실에 보관
지금 바로 불러서 쓸 데이터는 도마 위에 있다.

사람마다 냉장고 관리 스타일이 다르다. = 언어마다 메모리 관리 스타일이 다르다.
rust는 매우 엄격하게 메모리를 관리한다. => 프로그램의 성능과 직결
성능이 엄격하게 보장되어야 할 분야에 쓰이는 언어

