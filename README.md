## 과제명: 디지털꾸러미설계

1. 구현 내용:

   - 구조체: 데이터 요소가 n 개의 포함될 수 있도록 동적 저장소 관리 방법에 의해 생성자와 소멸자가 구현되어야 하며, 구조체 내부에 데이터 처리를 위한 방법이 최소한 5개 이상 구현되어 있어야 합니다.
   - 코드: 구현한 구조체에 의해 필요한 데이터를 읽어오고, 구현된 처리 방법을 호출하여 파생된 정보를 생산할 수 있어야 합니다. 이어받기를 구현한 코드의 경우에도 마찬가지입니다.
   - 보고서: 데이터를 선택한 배경, 아이디어, 그리고 프로그래밍 요소를 고려한 구조체 설계에 대한 설명, 진행한 내용과 결과, 그리고 결과에 대한 해석/평가를 담은 소논문이어야 합니다. 보고서는 반드시 코드 설명이 아니라 설계의 아이디어와 방법에 대한 논의를 담은 논문 형식 (서론, 배경, 구현 내용, 결과, 논의, 결론)을 갖춘 글 이어야 합니다. 개조식이나 메모형식을 글은 평가에서 불이익을 받습니다. 또한 삽화, 그림, 결과 그래프 등의 사용은 허용하지만 지나치게 그림으로만 구성된 보고서 또한 평가에서 감점요인이 됩니다. 페이지 수에 제약은 없지만, 지나치게 짧은 보고서 또한 감점 대상입니다.
   - 프로그램 언어: 과제에 사용하는 프로그램 언어에 제약은 없습니다. 하지만 구조체 설계이므로 C, C++를 사용할 것을 권장합니다

2. 구현 과정:
   - 캐글에서 dataset을 다운로드 받으니 엑셀의 .csv파일 형식으로 다운로드 됨. 
   - .csv 파일은 ',' 기호로 셀을 나누고 있다. (예시: 70,Big Fish,2003,8.0,433503,125,drama,US)
   - 이처럼 특정한 구분자(csv파일의 ',')를 사용해서 string을 파싱하는 경우가 있다. 이때 사용하는 것이 stringstream 객체와 getline 함수.
   - cpp의 파일 입출력에서 쓰기(ofstream) 함수를 이용할 필요는 없다. dataset에서 불러오기만 하면 됨.
   - cpp의 fstream 파일에는 세 개의 파일이 있다. istream(파일 읽기), ostream(파일 쓰기), fstream(파일 읽고 쓰기) 다음은 기본 파일 입출력 기본 요소.
   ```
   class fstream : public fstreambase, public iostream {
   }
   
   fstream fs;
   fs.open("파일명", ios::in or ios::out);
   fs.close();

   ```
   - csv 파일을 단위로 읽기 위해선 구분자 쉼표(,)를 기준으로 읽어 와야 한다. str_buf는 구분자 쉼표 이전까지만 읽는다는 뜻.
   ```asm
   getline(파일 객체, 읽어올 변수, 구분자);
   getline(inoutFile, str_buf, ',');
   ```
   - csv 파일 칼럼 총 7개: index, TITLE, RELEASE_YEAR, SCORE, NUMBER_OF_VOTES, DURATION, MAIN_GENRE, MAIN_PRODUCTION 
   - getline(파일 객체, 읽어올 변수) 한 번 실행 하면 'index,TITLE,RELEASE_YEAR,SCORE,NUMBER_OF_VOTES,DURATION,MAIN_GENRE,MAIN_PRODUCTION' 라인이 한번에 출력됨.
   - csv 각 요소를 저장하고 싶음(이게 parse랑 같은 의미인가?) 1, 2차원벡터, 배열 중 어떤 것을 사용해야 할까?
   - https://stackoverflow.com/questions/53643509/c-reading-csv-file-into-vectors-whilst-skipping-first-line-and-specific-co
   - 22-12-09 벡터에 값이 올바르게 들어갔는지 확인할 수 없음.
   - 22-12-12 벡터 값 넣기 성공.
   - oop 개념인 상속과 다형성을 이해하고 구현하는 데 시간이 많이 소요됐다. 사실 아직도 무슨 말인지 정확히는 모르곘다. 
   - 각 장르별 영화 클래스에 값을 생성자에 넣어주는 작업을 해야 함. UI만 마저 만들어서 제출하기. 
   - 모두 문자열로 저장했음. 개봉 연도를 정수형으로 바꿀 때, <string>헤더의 stoi 함수를 사용했는데 데이터셋 영화 제목에 ','이 섞여 있는 경우가 있어 오류가 있었음.
   - 결론적으로 객체지향프로그래밍은 설계를 정확히 하고 코딩을 시작해야 함을 배움. 
   - 클래스를 많이 만들지 말고 최소한으로 만들어 복잡함 줄이기. 너무 어렵게 생각했다. 
   - 정렬하는 기능
