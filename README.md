# fungo split keyboard v1.0.


## fungo split keyboard 는
기계식 스위치를 사용하고 qmk, zmk 사용을 기반으로 하는 분리형 키보드. 

## 왜 만들었을까?

실력 없는 늙은 개발자.

오래 일할 땐 손가락, 손목 통증 때문에 20년 넘은 PS2 타입 삼성 키보드를 사용했었다.

어쩌다 분리형 키보드가 있는 것을 보고 구해보려고 했는데 웬걸?

너~무 비싸기도 하거니와 키 배치도 맘에 드는 것이 없어.

그래서 할 수 없이 없는 실력 끌어모으고 옛 기억 더듬어서 새로 만들기로 했어.

**없는 실력에 만드느라 힘들었는데 그런데로 쓸만함.**


## 개요 
- 좌우 각 38key(5x7+3)로 구성됨.
- 체리스위치, 카일스위치 부착가능, 핫 스왑 가능
- 검지 손가락에 3줄의 키를 할당함.
- 제일 아래줄은 엄지 손가락을 펼쳐서 사용할 수 있도록 곡선으로 배치
- 리튬 폴리머 배터리 전원 스위치 추가(nicenano 사용할 경우)
- 리튬 폴리머 배터리 연결 단자 추가(nicenano 사용할 경우)
- 마우스 추가를 위한 spi 통신용 연결단자 추가(오른쪽에만 가능, i2c 불가)
- 왼쪽에만 oled 판넬 추가가능함.
- 설계일 기준 국내에서 모두 구매 가능한 부품으로 구성함.(스위치 구성품 제외)
- qmk 사용시 좌우 통신포트를 사용자가 지정할 수 있음.(tx or rx) 

## 문제점 및 특이사항
- 엄지 손가락으로 입력이 불편한 키 발생함.(여유분으로 사용중)
- 회로 설계 실수로 인하여 마우스 스위치용으로 배치한 연결단자 사용불가.
- 최종 조립시 컨트롤 보드와 기판의 간섭이 발생할 수 있음-컨트롤보드 부착시 최대한 간섭되지 않게 밀어서 설치해야함.
- 다이오드의 납땜 패턴이 smt기준으로 되어 수작업으로 납땜하기에는 어려운 편임-납땜 실력이 좀 있어야 작업가능.(아트웍 작업 실수)
- 좌우 대칭이 아님.
- 카일 스위치는 현재 부착해보지 않음.
- nanonice 보드는 설치해보지 못함(zmk 사용법을 몰라서)

## 주요부품

| 부품 | 수량 | 설명 | 비고|
|:--|:--|:--|:--|
| 상부 pcb | 2 | 스위치 프레임| 주문생산 |
| 패턴 pcb | 2 | 컨트롤러 및 전자부품 설치| 주문생산 |
| 하부 pcb | 2 | 하부 덮개| 주문생산 |
| Kailh PCB Socket - CPG151101S11 | 76 | 체리 스위치 핫스왑 소켓|  체리 스위치 사용할 경우 |
| Kailh PCB Socket - CPG135001S30 | 76 | 카일 스위치 핫스왑 소켓|  카일 스위치 사용할 경우 |
| 스위치 - 1U | 76 | 키보드 스위치 | 모든 규격이 1U |


## 부품
- 판매처 : 디바이스 마트

| 부품 | 수량 | 설명 | 비고|
|:--|:--|:--|:--|
| 핀헤더 HD200-40핀 (2mm)  | ? | 점퍼용 | 필요한 크기로 잘라서 사용, 필요한 위치에만 사용가능|
| 핀헤더소켓 Single Straight(2.54mm)  | ? | 마우스 외부연결, 컨트롤 보드 | 필요한 크기로 잘라서 사용, 필요한 위치에만 사용가능|
| 양방향 핀헤더 Single 40Pin (2.54mm) | ? | 컨트롤 보드 연결용 | 컨트롤 보드를 교체형으로 할때에만 필요|
| 53047-02 소켓 | 2 | 리튬폴리머 배터리 소켓 | nanonice 컨트롤러 사용할 경우 |
| 마이크로 슬라이드 스위치 [NW3-SK-02] | 2 | 배터리 전원 스위치 |nanonice 컨트롤러 사용할 경우|
| 1N4148WS | 76 | 각 스위치에 | 납땜 실패를 고려해서 여유있게 |
| ITS-1107 | 2 | TACT 스위치 | 컨트롤러 리셋 |
| DS1027 -점퍼(OPEN) pitch:2mm  | 3~11 | 컨트롤러 포트 설정 | 최소3개 이상이면 외부 마우스 연결없이 사용가능|
| 십자둥근머리 M2x4  또는 M2x5 | ? | 황동2파이 고정용 | 필요한 만큼 |
| lcd서포트 황동2파이 F-7mm  | ? | 패턴 pcb관통하여 상,하판 연결 | 필요한 만큼, 8mm가 있을 경우 8mm 추천 |
| lcd서포트 황동2파이 F-15mm | 8 | 컨트롤러 덮게 아크릴 고정용 | 덮게 사용할 경우만 |
| NT-B10-FOOT  | ? | 미끄럼방지용 | 필요한 수량만큼 |

## 부품
- 판매처 : 엘레파츠

| 부품 | 수량 | 설명 | 비고|
|:--|:--|:--|:--|
| 폰잭 PJ320D SMD | 2 | AUX 케이블 연결용 | nanonice  사용할 경우 불필요|
| 310-87-164 Straight Socket Connector 64pin 2.54mm  | ? | 컨트롤 보드 연결용 |컨트롤 보드를 교체형으로 할때에만 필요|
| coms 스테레오케이블(3.5/4극) NT940 | 1 | 좌우 키보드 데이터 전송용 | 원하는 제품으로 변경가능|
| 리튬폴리머 tw-501230 배터리 | 2 | 블루투스를 위해서 |nanonice 컨트롤러 사용할 경우, 배터리 두께는 조정가능|
