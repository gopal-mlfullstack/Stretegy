interface SocialLink {
  platform: string;
  url: string;
  icon: "github" | "linkedin" | "x" | "email";
}

export interface ProfileData {
  name: string;
  title: string;
  location: string;
  bio: string;
  imageUrl: string;
  skills: string[];
  socialLinks: SocialLink[];
}
