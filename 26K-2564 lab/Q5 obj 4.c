#include <stdio.h>

struct HospitalRecord {
    int recordId;
    char ward[20];
    struct PatientInfo {
        int patientId;
        char name[30];
        int age;
    } patient;
};
int main() {
    struct HospitalRecord record = {5001, "Emergency", {201, "Ali Khan", 35}};
    struct HospitalRecord *ptr = &record;

    printf("Record ID: %d\n", ptr->recordId);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient ID: %d\n", ptr->patient.patientId);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);
    return 0;
}
