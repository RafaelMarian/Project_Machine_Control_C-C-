% Citește CSV-ul
data = readtable('D:\Projects\C_CODE_F.O.C_And_Machine\plots\signals.csv');

% Redenumește coloanele dacă e cazul
data.Properties.VariableNames = {'t','Va','Vb','Vc','Vdc','AdcValue'};

t = data.t;
Va = data.Va;
Vb = data.Vb;
Vc = data.Vc;
Vdc = data.Vdc;
AdcValue = data.AdcValue;

% Grafic semnale trifazice + redresor
figure;
hold on;
plot(t, Va, 'r', 'LineWidth', 1.5);
plot(t, Vb, 'g', 'LineWidth', 1.5);
plot(t, Vc, 'b', 'LineWidth', 1.5);
plot(t, Vdc, 'k--', 'LineWidth', 2);
xlabel('Timp [s]');
ylabel('Tensiune [V]');
title('Semnale trifazice și tensiune redresată');
legend('Va','Vb','Vc','Vdc');
grid on;
hold off;

% Grafic ADC digital
figure;
plot(t, AdcValue, 'm', 'LineWidth', 1.5);
xlabel('Timp [s]');
ylabel('ADC Value');
title('Semnal digitalizat ADC');
grid on;
