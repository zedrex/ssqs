main: main.o simulation.o event.o customer.o exponential_random_number.o log.o
	g++ -std=c++11 -o main main.o simulation.o event.o customer.o exponential_random_number.o log.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

event.o: event.cpp event.h
	g++ -std=c++11 -c event.cpp

customer.o: customer.cpp customer.h
	g++ -std=c++11 -c customer.cpp

log.o: log.cpp log.h
	g++ -std=c++11 -c log.cpp

exponential_random_number.o: exponential_random_number.cpp exponential_random_number.h
	g++ -std=c++11 -c exponential_random_number.cpp

simulation.o: simulation.cpp simulation.h event.h customer.h log.h server_status.h exponential_random_number.h
	g++ -std=c++11 -c simulation.cpp

clean:
	rm main.o simulation.o event.o customer.o exponential_random_number.o log.o

