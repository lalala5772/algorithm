# 시맨틱(semantic) 기반 위치 정보 추정 기술
### 사용자가 위치를 묻는 질의를 입력했을 때, POI(point of interest)에 매핑된 텍스트들 간의 유사도를 분석하여 지도에 표시해주는 웹 서비스


![images](https://img.shields.io/github/license/minji-o-j/AI-Speaker-for-Senior-Citizen?style=flat-square)
![image](https://img.shields.io/badge/language-Python-blueviolet?style=flat-square&logo=Python)
![image](https://img.shields.io/badge/language-Javascript-blueviolet?style=flat-square&logo=Javascript)
![image](https://img.shields.io/badge/Latest%20Update-231211-9cf?style=flat-square)
<br/>

---
## 프로젝트 내용
### 목표
 - 학교 내의 객체,건물,공간 등의 위치를 잘 모르는 새내기나 외부인들이 편하게 위치를 물어보았을 때, 지도에 정확한 위치를 표시해주는 것



### 해결 과정
 - POI마다 좌표 정보와 위치를 설명하는 텍스트들을 매핑하였다.
 - 사용자가 입력한 전북대학교 내 위치에 대한 질의를 받고, 가장 큰 유사도를 보이는 좌표 값을 출력하여 지도에 보여준다.
 - 현재 수집한 전북대학교 데이터 셋의 위치 범위는 '중앙도서관','공대','자연대','농대' 근처 이다.
 - 현재 수집한 전북대학교 데이터 셋의 객체 종류는 '벤치','pm주차장','구조물','교내상가','흡연구역','쓰레기처리장','지름길','공간','건물' 이 있다.
 - 특정 쿼리에 대한 이스터에그가 존재하며, ['토끼','뽀시래기','귀요미'] 를 입력했을 때 학교에서 키우는 토끼의 집을 알 수 있다.



---
## 개발 스택
<img width="480" alt="image" src="https://github.com/lalala5772/algorithm/assets/65425885/75894e8b-d7f8-4196-af01-3964d37f73b0">


---
  
## 개발자
### 코드 역할 분담  

  

- 201918757 강성택 : easteregg - EasterEgg.py
- 202146712 박용수 : calculator - calculator.py
- 201918777 박종민 : calculator_controller - calculatorcontroller.py
- 201917604 이관호 : view - view.py
- 201912393 이미르 : input_check - inputcheck.py
- 201912430 조민서 : basic_code - main.py
- 201912431 조승호 : validation - validator.py
<br/>


  
---
## Work Flow

![WorkflowDiagram](https://github.com/lalala5772/basic-calculator/assets/65425885/c68dbba3-4074-4b9a-b856-903f997a92d7)
