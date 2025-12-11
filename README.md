# 🏥 Health_Mate - Complete Doctors Appointment Platform

A modern, full-stack healthcare platform that connects patients with doctors through seamless appointment booking, video consultations, and comprehensive healthcare management.

![Health_Mate Platform](https://github.com/user-attachments/assets/a0d3d443-f5e1-433a-85a7-a76a3866858d)

## 🌟 Features

### For Patients
- 🔍 **Browse Doctors** - Search doctors by specialty and location
- 📅 **Book Appointments** - Easy scheduling with real-time availability
- 💳 **Secure Payments** - Integrated payment system with credit management
- 🎥 **Video Consultations** - High-quality video calls with doctors

- 📱 **User Dashboard** - Manage appointments and medical records
- 🔐 **Authentication** - Secure sign-up/sign-in with Clerk

### For Doctors
- 👨‍⚕️ **Doctor Dashboard** - Comprehensive practice management
- ⏰ **Availability Management** - Set and update available time slots
- 📊 **Earnings Tracking** - Monitor income and payment analytics
- 📋 **Appointment Management** - View and manage patient appointments
- ✅ **Verification System** - Professional credential verification
- 💰 **Payout Management** - Request and track payment withdrawals

### For Administrators
- 🛡️ **Admin Panel** - Complete platform oversight
- ✅ **Doctor Verification** - Approve and verify doctor credentials
- 💸 **Payout Management** - Process doctor payment requests
- 📈 **Platform Analytics** - Monitor platform usage and metrics

## 🛠️ Tech Stack

### Frontend
- **Next.js 14** - React framework with App Router
- **Tailwind CSS** - Utility-first CSS framework
- **Shadcn/UI** - Modern component library
- **Radix UI** - Unstyled, accessible components

### Backend & Database
- **PostgreSQL** - Primary database
- **Prisma ORM** - Database toolkit and ORM
- **Neon** - Serverless PostgreSQL

### Authentication & Communication
- **Clerk** - Authentication and user management
- **Vonage** - Video calling and communication APIs

### Development Tools
- **ESLint** - Code linting and formatting
- **PostCSS** - CSS processing
- **Lucide React** - Icon library

## 🚀 Getting Started

### Prerequisites
- Node.js 18+ installed
- PostgreSQL database (or Neon account)
- Clerk account for authentication
- Vonage account for video calling

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/Rohiit-t/Health_Mate.git
   cd Health_Mate
   ```

2. **Install dependencies**
   ```bash
   npm install
   ```

3. **Set up environment variables**
   Create a `.env.local` file in the root directory:
   ```env
   # Database
   DATABASE_URL="your_postgresql_connection_string"

   # Clerk Authentication
   NEXT_PUBLIC_CLERK_PUBLISHABLE_KEY="your_clerk_publishable_key"
   CLERK_SECRET_KEY="your_clerk_secret_key"
   NEXT_PUBLIC_CLERK_SIGN_IN_URL="/sign-in"
   NEXT_PUBLIC_CLERK_SIGN_UP_URL="/sign-up"

   # Vonage Video API
   VONAGE_API_KEY="your_vonage_api_key"
   VONAGE_API_SECRET="your_vonage_api_secret"

   # App Configuration
   NEXT_PUBLIC_APP_URL="http://localhost:3000"
   ```

4. **Set up the database**
   ```bash
   npx prisma generate
   npx prisma db push
   ```

5. **Run the development server**
   ```bash
   npm run dev
   ```

6. **Open your browser**
   Navigate to [http://localhost:3000](http://localhost:3000)

## 📁 Project Structure

```
Health_Mate/
├── app/                    # Next.js App Router
│   ├── (auth)/            # Authentication pages
│   ├── (main)/            # Main application pages
│   │   ├── admin/         # Admin dashboard
│   │   ├── doctor/        # Doctor dashboard
│   │   ├── doctors/       # Doctor listings
│   │   ├── appointments/  # Appointment management
│   │   └── video-call/    # Video consultation
│   └── globals.css        # Global styles
├── components/            # Reusable UI components
│   └── ui/               # Shadcn/UI components
├── actions/              # Server actions
├── lib/                  # Utility functions
├── prisma/               # Database schema and migrations
├── hooks/                # Custom React hooks
└── public/               # Static assets
```

## 🎯 Key Functionality

### Appointment Booking Flow
1. Patient browses doctors by specialty
2. Selects available time slots
3. Completes payment process
4. Receives confirmation and video call link
5. Attends video consultation at scheduled time

### Doctor Onboarding
1. Doctor signs up and completes profile
2. Submits verification documents
3. Admin reviews and approves
4. Doctor sets availability and starts accepting patients

### Payment System
1. Patients purchase credits for appointments
2. Credits are deducted for each booking
3. Doctors receive payments after consultations
4. Admin processes payout requests

## 🔧 Configuration

### Database Schema
The application uses Prisma with the following main models:
- `User` - Patient and doctor information
- `Doctor` - Doctor-specific data and verification
- `Appointment` - Booking and scheduling data
- `Payout` - Doctor payment requests
- `Credit` - Patient credit management

### Authentication
Clerk handles:
- User registration and login
- Profile management
- Role-based access control
- Session management

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 👨‍💻 Author

**Rohit Singh**
- GitHub: [@Rohiit-t](https://github.com/Rohiit-t)
- Email: Rohit.singh.ug22@nsut.ac.in

## 🙏 Acknowledgments

- Thanks to the Next.js team for the amazing framework
- Shadcn for the beautiful UI components
- Clerk for seamless authentication
- Vonage for reliable video communication
- The open-source community for inspiration and support

---

