# 2026_Kwangwoon_DS_Project_1
2026-09-14 업로드 예정

[데이터 구조 Project 1 과제 안내]
이번 과제부터는 이론과 실습의 제출 기한이 서로 다르니, 마감일을 반드시 잘 확인해 주시기 바랍니다.
또한 과제에 대한 추가 내용 및 변경 사항이 README 파일에 상시 업데이트될 예정이므로, 주기적으로 체크해 주시기 바랍니다.

---

## Update Notes  

**2026-09-14 :**  
- initial upload  


**2026-09-16 :**  
- 실습, 설계 제안서 수정(추가 설명)
- 스켈레톤 코드 일부 수정

**2026-09-23 :**  
- 실습, 설계 제안서 수정(제한사항 및 구현 시 유의사항 수정)
 >반드시 제공되는 코드(github 주소 참고)를 이용하여 구현하며 작성된 소스 파일의 이름과 클래스와 함수 이름은 임의로 변경하지 않는다.
 >함수의 반환형과 매개변수는 구현에 맞게 조정할 수 있으며, 클래스의 함수 및 변수는 자유롭게 추가 구현이 가능하다.

---

## Due Date  

 - 이론 2026 년 10 월 11일 일요일 23:59:59(추가 제출: 2026년 10월 12일 월요일 00:59:59 까지, 10% 감점)
 - 실습 2026 년 10 월 9일 금요일 23:59:59(추가 제출: 2026년 10월 10일 토요일 00:59:59 까지, 10% 감점)

 - 제출 전에 반드시 제안서를 꼼꼼히 읽어보시고, 요구사항을 모두 충족했는지 확인하시기 바랍니다.  
 - 프로젝트 진행 중 궁금한 사항은 GitHub 저장소의 Issues 탭을 통해 질문해 주시기 바랍니다.

---

## How to Clone Repository  

```bash
sudo apt-get install git
git clone https://github.com/Moondongoh/2026_Kwangwoon_DS_Project_1.git
```

---

## NEED TO DOWNLOAD

```bash
sudo apt install make
sudo apt install gcc
sudo apt install g++
```

## How to Run  
- 반드시 Makefile이 위치한 디렉토리 내에서 수행해야 함. cd(change directory)로 변경하기

```bash
cd DS_Project1_26
make
./run
```

## How to check memory leak 
- make 이후 생성된 run 파일 실행 전에 valgrind 명령어를 입력하면 메모리 누수를 확인 가능

```bash
sudo apt-get update
sudo apt-get install valgrind
valgrind ./run
```

---

## 구현 고려사항  

 - 제공된 스켈레톤 코드는 참고용이며, 본인이 원하는 방식으로 함수를 자유롭게 추가하거나 수정하여 구현할 수 있다.
 - 단, 과제 제안서에 명시된 요구사항을 반드시 충족해야 한다(감점 요인).
 - Queue, BST, 양방향 연결 리스트는 STL을 사용할 수 없으며, 모두 직접 구현해야 한다. (queue, map, set, list, deque 등으로 대체 불가)
 - string, vector, pair 등 자료구조와 직접적인 관련이 없는 STL은 사용 가능하다.
 - 함수명, 데이터 형식, 클래스 구조는 자유롭게 변경 가능하지만, 전체 프로그램의 실행 흐름과 명령어 처리 방식은 과제 명세를 따라야 한다.
 - 스켈레톤 코드는 빌드 성공을 보장하지 않으며, 학생이 직접 수정 및 보완하여 완성해야 한다.
 - 추가적으로 log_예시.txt 파일을 함께 제공하였다. 배포된 command_예시.txt를 실행했을 때의 결과와 각 명령어에 대한 설명이 포함되어 있으므로 구현 시 참고한다. (log_예시.txt, command_예시.txt파일은 이해를 돕기 위한 예시 파일입니다.)
 - 반드시 command.txt와 Exercise_List.txt 파일은 소스코드 파일과 같은 위치에 있어야 한다.
 - 본 프로젝트는 데이터구조 수업에서 다루는 기본 자료구조의 동작 확인을 목적으로 하는 과제이다. 따라서 극단적인 예외 상황까지 고려할 필요는 없다. (예: 운동 종목과 장비가 모두 같은 세트가 중복 입력되는 경우, 실제로 존재하는 운동인지 검증하는 과정 등은 구현 대상에서 제외된다.)
 - MAKERT 명령어 : EXERCISE, EQUIPMENT 옵션으로 하나가 아닌 여러 세트를 한 번에 추가하는 과정에서, 넣고자 하는 세트 중 하나라도 이미 Routine에 존재하거나 Routine의 남은 공간이 부족한 경우에는 일부만 추가하지 않고 전체를 에러 코드로 처리한다. log_예시.txt에 해당 예시가 있으니 참고 바랍니다.
 - LOAD 명령어 : 한 번만 수행 가능하며, 이미 데이터를 불러온 상태에서 다시 호출되면 에러 코드를 출력한다.
 - DELETE 명령어 : EXERCISE, EQUIPMENT, SET 옵션은 우선적으로 BST(ExerciseBST, EquipmentBST)에 저장된 데이터를 삭제하는 것을 목표로 한다. Routine에 동일한 데이터가 존재할 경우 함께 삭제되지만, 존재하지 않을 경우에는 별도의 오류 처리 없이 BST에서만 삭제가 이루어진다.
 - DELETE FRONT / BACK : Routine의 맨 앞·맨 뒤 세트만 제거하며 BST에는 영향을 주지 않는다. Routine이 비어 있으면 에러 코드를 출력한다.

---
