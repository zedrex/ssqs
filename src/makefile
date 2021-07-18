main: main.o simulation.o event.o customer.o exponential_random_number.o log.o
	g++ -o main main.o simulation.o event.o customer.o exponential_random_number.o log.o

main.o: main.cpp
	g++ -c main.cpp

event.o: event.cpp event.h
	g++ -c event.cpp

customer.o: customer.cpp customer.h
	g++ -c customer.cpp

log.o: log.cpp log.h
	g++ -c log.cpp

exponential_random_number.o: exponential_random_number.cpp exponential_random_number.h
	g++ -c exponential_random_number.cpp

simulation.o: simulation.cpp simulation.h event.h customer.h log.h server_status.h exponential_random_number.h
	g++ -c simulation.cpp

clean:
	rm main.o simulation.o event.o customer.o exponential_random_number.o log.o

